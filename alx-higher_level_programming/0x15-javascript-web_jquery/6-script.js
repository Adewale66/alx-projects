$( '#update_header' ).on( 'click' , function () {

  $( 'header' ).empty();
  $( 'header' ).append( document.createTextNode('New Header!!!') )

});
