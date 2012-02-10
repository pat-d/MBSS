(function ($) {

  Drupal.behaviors.fusionSlideshowSize = {
    attach: function (context, settings) {
      
      $('.view-fusion-slideshow .views-row').each(function(index) {
        var $bgImage = $(this).children('img').first();
        var $imgHeight = $bgImage.height();
        var $imgWidth = $bgImage.width();
        var $imgSrc = $bgImage.attr("src");

        $(this).once('background').css({
          'background': 'transparent url('+$imgSrc+') no-repeat 50% 50%', 
          'height' : $imgHeight,
          'width' : $imgWidth,
        });
        
        $bgImage.hide();
        
      });     
    }
  };
})(jQuery);

