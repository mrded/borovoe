<div class="super-style header-wrapper">
  <div class="mountains left"></div>
  <div class="mountains right"></div>
  <div class="clouds left"></div>
  <div class="clouds right"></div>

  <div class="page-header">
    <h1>Боровое <small>Subtext for header</small></h1>
  </div>
</div>

<div class="super-style"><div class="horizon"></div></div>



<div class="main-wrapper">
  <div class="main-container container">

    <?php if (!empty($primary_nav)): ?>
      <?php print render($primary_nav); ?>
    <?php endif; ?>

    <?php print render($title_prefix); ?>
    <?php if (!empty($title)): ?>
      <h2 class="page-header"><?php print $title; ?></h2>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

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
