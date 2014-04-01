// Caroussel Script
$(function() {
    $('.jcarousel').jcarousel({
        // Configuration goes here
    });

    $('.jcarousel-prev').jcarouselControl({
        target: '-=1'
    });

    $('.jcarousel-next').jcarouselControl({
        target: '+=1'
    });
});

// Form Scripts
;(function ($) {
  "use strict";

  var $form = $('#ss-form');

  /**
   * Callback for form submittion.
   */
  function afterSubmittion() {
    $form.addClass('submitted');
  }

  /**
   * Listen to form submition event.
   */
  $form.ajaxForm({
    success: afterSubmittion,
    error: afterSubmittion
  });

}(jQuery));

// Animation for 'learn more' transition
jQuery(document).ready(function() {
  $(".scroll").click(function(event){   
    event.preventDefault();
    $('html,body').animate({scrollTop:$(this.hash).offset().top}, 600);
  });
});