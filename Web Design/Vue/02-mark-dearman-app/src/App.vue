<template>
  <div id="app">
    <app-header></app-header>
    <app-body></app-body>
  </div>
</template>

<script>
import Header from './components/header/Header'
import Body from './components/body/Body'
export default {
  components:{
    'app-header':Header,
    'app-body':Body
  },
  name: 'app',
  data () {
    return {

    }
  }
}
</script>

<style>
*{
  @import url('https://fonts.googleapis.com/css?family=Roboto+Condensed');
  padding: 0px;
  margin: 0px;
  font-family:'Roboto Condensed',sans-serif;
}
</style>
