$.get( "https://hellosalut.stefanbohacek.dev/?lang=fr" , (res) => {
  $( '#hello' ).append(res.hello);
});
