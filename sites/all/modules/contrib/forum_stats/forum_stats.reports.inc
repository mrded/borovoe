<?php

function forum_stats_month_page() {
  $comments_stats = db_query("SELECT FROM_UNIXTIME(created, '%Y-%m-%d') as date, COUNT(*) as count
    FROM {comment}
    WHERE created > :date AND status = 1
    GROUP BY date
    ORDER BY date DESC", array(':date' => strtotime('1 month ago')))
  ->fetchAllKeyed();

  $topics_stats = db_query("SELECT FROM_UNIXTIME(created, '%Y-%m-%d') as date, COUNT(*) as count
    FROM {node}
    WHERE created > :date AND type = 'forum' AND status = 1
    GROUP BY date
    ORDER BY date DESC", array(':date' => strtotime('1 month ago')))
    ->fetchAllKeyed();

  $times = _forum_stats_date_range('1 month ago', 'now');

  return theme('forum_stats_chart', array(
    'times' => $times,
    'topics' => array_map(function($day) use ($topics_stats) {
      return $topics_stats[$day] ? (int)$topics_stats[$day] : 0;
    }, $times),
    'comments' => array_map(function($day) use ($comments_stats) {
      return $comments_stats[$day] ? (int)$comments_stats[$day] : 0;
    }, $times),
  ));
}

function forum_stats_year_page() {
  $comments_stats = db_query("SELECT FROM_UNIXTIME(created, '%Y %M') as date, COUNT(*) as count
    FROM {comment}
    WHERE created > :date AND status = 1
    GROUP BY date
    ORDER BY date DESC", array(':date' => strtotime('1 year ago')))
    ->fetchAllKeyed();

  $topics_stats = db_query("SELECT FROM_UNIXTIME(created, '%Y %M') as date, COUNT(*) as count
    FROM {node}
    WHERE created > :date AND type = 'forum' AND status = 1
    GROUP BY date
    ORDER BY date DESC", array(':date' => strtotime('1 year ago')))
    ->fetchAllKeyed();

  $times = _forum_stats_date_range('1 year ago', 'now', '+1 month', 'Y F');

  return theme('forum_stats_chart', array(
    'times' => $times,
    'topics' => array_map(function($day) use ($topics_stats) {
      return $topics_stats[$day] ? (int)$topics_stats[$day] : 0;
    }, $times),
    'comments' => array_map(function($day) use ($comments_stats) {
      return $comments_stats[$day] ? (int)$comments_stats[$day] : 0;
    }, $times),
  ));
}

function forum_stats_all_page() {
  $comments_stats = db_query("SELECT FROM_UNIXTIME(created, '%Y') as date, COUNT(*) as count
    FROM {comment}
    WHERE status = 1
    GROUP BY date
    ORDER BY date DESC")
    ->fetchAllKeyed();

  $topics_stats = db_query("SELECT FROM_UNIXTIME(created, '%Y') as date, COUNT(*) as count
    FROM {node}
    WHERE type = 'forum' AND status = 1
    GROUP BY date
    ORDER BY date DESC")
    ->fetchAllKeyed();

  $times = array_keys($comments_stats + $topics_stats);
  sort($times);

  return theme('forum_stats_chart', array(
    'times' => $times,
    'topics' => array_map(function($day) use ($topics_stats) {
      return $topics_stats[$day] ? (int)$topics_stats[$day] : 0;
    }, $times),
    'comments' => array_map(function($day) use ($comments_stats) {
      return $comments_stats[$day] ? (int)$comments_stats[$day] : 0;
    }, $times),
  ));
}

function _forum_stats_date_range($first, $last, $step = '+1 day', $format = 'Y-m-d') {
  $dates = array();
  $current = strtotime($first);
  $last = strtotime($last);

  while ($current <= $last) {
    $dates[] = date($format, $current);
    $current = strtotime( $step, $current );
  }

  return $dates;
}
