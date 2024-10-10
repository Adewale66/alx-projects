$.when( $.ready ).then(function () {
  $( '#add_item' ).on( 'click' , () => {
    $( '.my_list' ).append( '<li>Item</li>' );
  });

  $( '#remove_item' ).on( 'click' , () => {
    $( '.my_list li:last-child' ).remove();
  });

  $( '#clear_list' ).on( 'click' , () => {
    $( '.my_list' ).empty();
  });


});
