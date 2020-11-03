// 以下是引入的模块
import Vue from 'vue'
import Vuex from 'vuex'
import mutations from './mutations'
import actions from './actions'
import getters from './getters'
import moduleA from './modules/moduleA'
import moduleB from './modules/moduleB'
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
  actions,
  getters,
  modules: {
    moduleA,
    moduleB
  }
})

