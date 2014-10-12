Drupal.behaviors.forumStatsCharts = {
  attach: function(context, settings) {
    new Highcharts.Chart(settings.forum_stats_chart);
  }
};
