<template>
  <div id="app-header">
    <app-navbar/>
    <h1>{{title}}</h1>
  </div>
</template>

<script>
import Navbar from './Navbar'
export default {
  components:{
    'app-navbar':Navbar
  },
  name: 'app-header',
  data () {
    return {
      title:'Digital​ Design & Motion'
    }
  }
}
</script>

<style scoped>
h1{
  text-transform:uppercase;
  font-size:3em;
  padding: 90px;
  text-align:center;
  letter-spacing:0.09em;
  font-weight:100;
}
</style>
