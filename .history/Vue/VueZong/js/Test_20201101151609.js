let _this;
new Vue({
  el: '#app',
  data: {
    message: '你好',
    baidu: 'https://www.baidu.com/',
    isActive: true,
    isFontSize: true,
    isColor: true,
    finalColor: 'red',
    finalSize: 30,
    baseColor: {
      color: 'red'
    },
    baseSize: {
      fontSize: '30px'
    },
    firstName: '小',
    lastName: '吉'
  },
  computed: {
    fullname: function () {
      return this.firstName + ',' + this.lastName
    }
  },
  methods: {
    cs: function () {
      console.log('cscs')
    },
    backEvent(abc, event) {
      console.log("事件返回", abc, event);
    },
    divStop1() {
      console.log('divStop1');
    },
    divStop2() {
      console.log('divStop2');
    },
  },
})