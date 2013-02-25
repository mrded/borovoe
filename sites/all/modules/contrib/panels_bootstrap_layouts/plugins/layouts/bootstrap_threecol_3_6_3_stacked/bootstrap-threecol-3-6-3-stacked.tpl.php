<div class="panel-display bootstrap-threecol-3-6-3" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="row-fluid">
    <div class="panel-panel span12">
      <?php print $content['top']; ?>
    </div>
  </div>
  <div class="row-fluid">
    <div class="panel-panel span3">
      <?php print $content['left']; ?>
    </div>
    <div class="panel-panel span6">
      <?php print $content['middle']; ?>
    </div>
    <div class="panel-panel span3">
      <?php print $content['right']; ?>
    </div>
  </div>
  <div class="row-fluid">
    <div class="panel-panel span12">
      <?php print $content['bottom']; ?>
    </div>
  </div>
</div>