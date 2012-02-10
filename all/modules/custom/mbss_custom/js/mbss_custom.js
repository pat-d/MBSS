(function ($) {

Drupal.behaviors.concatPersonnelName = {
  attach: function (context, settings) {
    $('.form-item-title').hide();
    
    $('input#edit-field-personnel-firstname-und-0-value').change(function() {
      nameValue();
     });
     
     $('input#edit-field-personnel-lastname-und-0-value').change(function() {
       nameValue();
      });
  }
};

function nameValue() {
  $('input#edit-title').val(function(index, value) {
    return $('input#edit-field-personnel-firstname-und-0-value').val() + ' ' + $('input#edit-field-personnel-lastname-und-0-value').val();
  });
}

})(jQuery);
    