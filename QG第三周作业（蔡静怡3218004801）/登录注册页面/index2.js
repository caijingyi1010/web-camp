function num(num{
    //定义正则表达式的变量:邮箱正则
    var emaileReg=/^\w+([-+.]\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*$/;
    
    if(num!="" && num.search(emailReg) != -1)
    {
        document.getElementById("test_user").innerHTML = "邮箱格式正确";
    }else{
        document.getElementById("test_user").innerHTML = "邮箱格式错误";
    }
}

