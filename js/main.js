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

// Caroussel Key Listener
$(document).keypress(function( event ) {
  if (event.keyCode == 37 || event.keyCode == 39) {

    switch (event.keyCode) {
      case 39:
        direction = '+=1';
        break;
      case 37:
        direction = '-=1';
        break;
    }

    $('.jcarousel').jcarousel('scroll', direction);
  }
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