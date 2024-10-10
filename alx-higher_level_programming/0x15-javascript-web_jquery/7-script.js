$.get( "https://swapi-api.alx-tools.com/api/people/5/?format=json", (res) => {
  $( '#character' ).append(res.name);
});
