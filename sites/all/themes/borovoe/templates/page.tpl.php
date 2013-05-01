<div class="super-style header-wrapper">
  <div class="mountains left"></div>
  <div class="mountains right"></div>
  <div class="clouds left"></div>
  <div class="clouds right"></div>

  <div class="page-header">
    <h1><a href="<?php print $front_page; ?>" class="site-name"><?php print $site_name; ?>Боровое</a> <small>Жемчужина Казахстана</small></h1>
  </div>
</div>

<div class="super-style"><div class="horizon"></div></div>

<div class="main-wrapper">
  <div class="main-container container">

    <div class="row-fluid">
      <div class="span5">
        <?php if (!empty($title)): ?>
          <h3 class="page-title"><?php print $title; ?></h3>
        <?php endif; ?>
      </div>
      <div class="span7">
        <?php if (!empty($primary_nav)): ?>
          <?php print render($primary_nav); ?>
        <?php endif; ?>
      </div>
    </div>

    <?php print $messages; ?>

    <?php if (!empty($tabs)): ?>
      <?php print render($tabs); ?>
    <?php endif; ?>

    <?php if (!empty($page['help'])): ?>
      <div class="well"><?php print render($page['help']); ?></div>
    <?php endif; ?>

    <?php if (!empty($action_links)): ?>
      <ul class="action-links"><?php print render($action_links); ?></ul>
    <?php endif; ?>

    <?php print render($page['content']); ?>
  </div>

  <div class="super-style middle-wrapper">
    <div class="horizon"></div>
    <div class="mountains left"></div>
    <div class="mountains right"></div>
    <div class="clouds left"></div>
    <div class="clouds right"></div>
  </div>
</div>
