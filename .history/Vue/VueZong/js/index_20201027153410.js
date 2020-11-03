// 以下是引入的模块
import Vue from 'vue'
import Vuex from 'vuex'
import getDate from './getDate'

//使用vuex
Vue.use(Vuex)
// 数据仓库
const state={
  count:1,
  info:{
    name:'飘飘',
    age:18,
    sex:'男'
  }
}
// 以下是模块化导入的使用
export default new Vuex.Store({
  state,
  mutations,
  getDate
})

