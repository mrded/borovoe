<div class="main-container container">
  <header></header>

  <div class="container-fluid">
    <div class="row-fluid">
      <div class="span3">
        <?php if (!empty($logo)): ?>
          <a class="logo pull-left" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>">
            <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
          </a>
        <?php endif; ?>

        <?php if (!empty($primary_nav)): ?>
          <?php print render($primary_nav); ?>
        <?php endif; ?>
        <p style="text-align: center;"><OBJECT classid="clsid:D27CDB6E-AE6D-11cf-96B8-444553540000" codebase="http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=6,0,0,0" WIDTH="160" HEIGHT="148" id="loader" ALIGN=""> <PARAM NAME=movie VALUE="http://rp5.kz/informer/group/1/19.swf"> <PARAM NAME=quality VALUE=high> <PARAM NAME=scale VALUE=noscale> <PARAM NAME=salign VALUE=LT> <PARAM NAME=wmode VALUE=transparent> <PARAM NAME=bgcolor VALUE=#FFFFFF> <PARAM NAME=flashvars VALUE="points=141414,10146,9505&lang=ru&um=00000"><EMBED src="http://rp5.kz/informer/group/1/19.swf" quality=high scale=noscale salign=LT wmode=transparent bgcolor=#FFFFFF  WIDTH="160" HEIGHT="148" NAME="loader" flashvars="points=141414,10146,9505&lang=ru&um=00000" ALIGN="" TYPE="application/x-shockwave-flash" PLUGINSPAGE="http://www.macromedia.com/go/getflashplayer"></EMBED></OBJECT></p>
        <p style="text-align: center;"><a href="http://kazfin.info/" title="Курсы валют"><img alt="Ежедневные курсы валют в Республике Казахстан" src="http://kazfin.info/informer/default.png"> </a></p>
        <p style="text-align: center;"><a href="http://www.borovoe.kz/index.php?option=com_banners&task=click&bid=24"><img src="http://habrastorage.org/storage2/def/485/ae7/def485ae741ccd21ecb22805cd13ebcd.gif"/></a>
        <!--Sidebar content-->
      </div>
      <div class="span8">
        <section>
          <?php if (!empty($page['highlighted'])): ?>
            <div class="highlighted hero-unit"><?php print render($page['highlighted']); ?></div>
          <?php endif; ?>
          <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
          <a id="main-content"></a>
          <?php print render($title_prefix); ?>
          <?php if (!empty($title)): ?>
            <h1 class="page-header"><?php print $title; ?></h1>
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
        </section>
        <!--Body content-->
      </div>
    </div>
  </div>
</div>

<footer class="footer main">
  <?php print render($page['footer']); ?>
</footer>
