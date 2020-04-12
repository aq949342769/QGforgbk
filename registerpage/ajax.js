let serverUrl = 'http://recruit.qgailab.com/'
let log_btn = document.getElementsByClassName('button')
log_btn[0].onclick = function () {
    let data = {
        username: document.getElementById('account').value,
        password: document.getElementById('password').value,

    }

    let log_http = new XMLHttpRequest()
    log_http.open("POST", serverUrl + "ajax/login", true);
    log_http.setRequestHeader("Content-type", "application/json");
    log_http.send(JSON.stringify(data));
    log_http.onreadystatechange = function () {
        if (log_http.readyState === 4 && log_http.status === 200) {
            let result = JSON.parse(log_http.responseText);
            if (result.code === 1) {
                alert(result.message)
            } else {
                alert(result.message)
            }
        }
    }
}