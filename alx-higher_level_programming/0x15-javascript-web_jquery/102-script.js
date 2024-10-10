$.when( $.ready ).then(function () {
  $( '#btn_translate' ).click(function () {
    $.get('https://www.fourtonfish.com/hellosalut/?' + $.param({ lang: $( '#language_code' ).val() }), function (data) {
      $( '#hello' ).html(data.hello);
    });
  });

});
