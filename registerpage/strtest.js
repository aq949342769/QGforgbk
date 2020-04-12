var password = document.getElementsByClassName('password')
for (let i = 0; i < password.length; i++) {
    password[i].onblur = function () {
        if (this.value.length < 8 || this.value.length > 16) {
            alert('请输入8到16位的密码');
        }
    }
}
var password_confirm = document.getElementById('password_c');
var password_input = document.getElementById('password_i');
password_confirm.onblur = function () {
    if (password_confirm.value != password_input.value) {
        alert('请重新确认密码');
    }
}