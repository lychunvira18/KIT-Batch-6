<template>
  <div id="navbar">
    <a href="#index"><img src="https://static1.squarespace.com/static/5a440a0f268b960493db90a7/t/5a4bf35471c10b82b8bda17e/1551437708241/"></a>
    <ul>
      <li v-for="link in links"><a :href="link.link">{{link.name}}</a></li>
    </ul>
  </div>
</template>

<script>
export default {
  name: 'navbar',
  data () {
    return {
      links:[
      {name:'Digital Design & Motion',link:'#design'},
      {name:'R&D',link:'#rnd'},
      {name:'Profile',link:'#profile'}
      ]
    }
  }
}
</script>

<style scoped>
#navbar{
  height:150px;
}
ul{
  padding: 40px;
  text-align: right;
  list-style:none;
  font-size:15px;
}
li{
  text-transform:uppercase;
  padding:calc(35px - 15px / 2) 20px;
  display:inline-block;
  letter-spacing:0.12em;
}
a{
  color:#333;
  text-decoration:none;
}
img{
  position: absolute;
  padding: 55px;
  height:35px;
}
</style>
