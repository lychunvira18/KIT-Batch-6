<template>
  <div id="app-body">
    <div v-for="pic in pics">
      <span>{{pic.name}}</span>
      <img :src="pic.link">
    </div>
  </div>
</template>

<script>
export default {
  name: 'app-body',
  data () {
    return {
      pics:[{name:'Showreel',link:'https://static1.squarespace.com/static/5a440a0f268b960493db90a7/t/5c6d2a8ce5e5f0de3510ce26/1550658192212/reel.jpg?format=2500w'},
      {name:'Future Aesthetic',link:'https://static1.squarespace.com/static/5a440a0f268b960493db90a7/t/5c790f8cb208fc36c0ea8c77/1546606596676/?format=2500w'},
      {name:'Aspen Art',link:'https://static1.squarespace.com/static/5a440a0f268b960493db90a7/t/5b4399f1aa4a99ba1fd401a5/1531156981594/ASPEN_MOCA5.jpg?format=2500w'},
      {name:'Arndale',link:'https://static1.squarespace.com/static/5a440a0f268b960493db90a7/t/5a4cc13b9140b791bb33fcc8/1514979650199/MAC_window8.jpg?format=2500w'},
      {name:'Werkhouse',link:'https://static1.squarespace.com/static/5a440a0f268b960493db90a7/t/5a4d62efc8302529ed7106d5/1515022872058/wh.jpg?format=2500w'},
      {name:'Dartington',link:'https://static1.squarespace.com/static/5a440a0f268b960493db90a7/t/5a44eef8652dea22a57a5db7/1515414365681/3_box_closeup.jpg?format=2500w'}]
    }
  }
}
</script>

<style scoped>
#app-body{
  margin-top:50px;
}
img{
  height:100%;
}
span{
  color:#fff;
  display:block;
  position:relative;
  top:1050px;
  left: 20px;
  letter-spacing:0.03em;
  text-transform:uppercase;
  font-size:1.7em;
}
</style>
