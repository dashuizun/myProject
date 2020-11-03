
let _this;
new Vue({
    el: '#getDate',
    data: {
        date: new Date()
    },
    methods: {
        hdate: function(value) {
            return value < 10 ? '0' + value : value;
        }
    },
    filters: {
        formatDate: function(value) {
            var date = new Date(value);
            var year = date.getFullYear();
            var month = _this.hdate(date.getMonth() + 1);
            var day = _this.hdate(date.getDate());
            var hours = _this.hdate(date.getHours());
            var minutes = _this.hdate(date.getMinutes());
            var wk = _this.hdate(date.getDay());
            var seconds = _this.hdate(date.getSeconds());
            var week = "星期" + "日一二三四五六".charAt(date.getDay());
            return year + '-' + month + '-' + day + ' ' + hours + ':' + minutes + ':' + seconds + "   " + week;
        }
    },
    beforeCreate:function(){
         _this = this;                           //将变量 _this指向 Vue 实例 this。
    },
    mounted:function() {
        this.timer = setInterval(function() {
            _this.date = new Date();             //修改数据 date
        }, 1000);
    },
    beforeDestroy: function() {
        if(this.timer) {
            clearInterval(this.timer);          //销毁前消除定时器
        }
    }
})