<div class="panel-display row bootstrap-twocol-6-6-stacked" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel span12">
    <?php print $content['top']; ?>
  </div>
  <div class="panel-panel span6">
    <?php print $content['left']; ?>
  </div>
  <div class="panel-panel span6">
    <?php print $content['right']; ?>
  </div>
  <div class="panel-panel span12">
    <?php print $content['bottom']; ?>
  </div>
</div>
