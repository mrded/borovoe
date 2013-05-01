<div class="<?php print $classes ?>">
  <div class="topbar">
    <h4 class="name"></h4>
    <div class="close back">X</div>
  </div>

  <section class="main">
    <div class="wrapper">
      <ul class="tp-grid">
        <?php foreach ($rows as $key => $row): ?>
          <?php print $row ?>
        <?php endforeach ?>
      </ul>
    </div>
  </section>
</div>
