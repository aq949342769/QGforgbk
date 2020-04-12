// 切换登录注册
var re = document.getElementById('reg')
var back = document.getElementById('back')
var registerPage = document.getElementById('registerPage')
var logPage = document.getElementById('logPage')
re.onclick = function () {
    logPage.style.display = 'none';
    registerPage.style.display = 'block';
}
back.onclick = function () {
    logPage.style.display = 'block';
    registerPage.style.display = 'none';

}
// 切换明文密文
var pwd = document.getElementsByClassName('password')
var ocpwd = document.getElementsByClassName('ocpwd')
var flag = 0;

// for (let i = 0; i < open.length; i++) {
ocpwd[0].onclick = function () {
    if (flag == 0) {
        pwd[0].type = 'text';
        ocpwd[0].src = 'images/close.png';
        ocpwd[0].style.width = '25px';
        ocpwd[0].style.top = '175px';
        ocpwd[0].style.right = '475px';

        flag = 1;
    } else {
        pwd[0].type = 'password';
        ocpwd[0].src = 'images/open.png';
        ocpwd[0].style.width = '15px';
        ocpwd[0].style.top = '180px';
        ocpwd[0].style.right = '480px';




        flag = 0;
    }
}
ocpwd[1].onclick = function () {
    if (flag == 0) {
        pwd[1].type = 'text';
        pwd[2].type = 'text';
        ocpwd[1].src = 'images/close.png';
        ocpwd[1].style.width = '25px';
        ocpwd[1].style.top = '175px';
        ocpwd[1].style.right = '475px';

        flag = 1;
    } else {
        pwd[1].type = 'password';
        pwd[2].type = 'password';
        ocpwd[1].src = 'images/open.png';
        ocpwd[1].style.width = '15px';
        ocpwd[1].style.top = '180px';
        ocpwd[1].style.right = '480px';

        flag = 0;
    }
}