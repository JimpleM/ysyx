// ==UserScript==
// @name         bupt雨课堂
// @namespace    http://tmpermonkey.net/
// @version      1.2
// @description  雨课堂视频自动播放
// @author       Reborn丶错爱
// @match        https://grsbupt.yuketang.cn/*
// @match        https://grsbupt.yuketang.cn/*
// @icon         data:image/png;base64,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
// @grant        unsafeWindow
// @grant        GM_xmlhttpRequest
// @grant        GM_addStyle
// @grant        GM_getResourceText
// @run-at       document-end
// @license MIT
// ==/UserScript==

(function () {
    'use strict';
    const rate = 2;
    var flag = 0;
   

    function fun(className, selector)
    {
        var mousemove = document.createEvent("MouseEvent");
        mousemove.initMouseEvent("mousemove", true, true, unsafeWindow, 0, 10, 10, 10, 10, 0, 0, 0, 0, 0, null);
        document.getElementsByClassName(className)[0].dispatchEvent(mousemove);
        document.querySelector(selector).click();
    }

    function speed() {
        let keyt = '';
        if(rate === 2 || rate === 1){
            keyt = "[keyt='" + rate + ".00']"
        }else{
            keyt = "[keyt='" + rate + "']"
        }
        fun("xt_video_player_speed", keyt);
    }


    function goNextVideo(step) {
        var url = window.location.href;
        if (url == 'https://changjiang.yuketang.cn/web/?index') {
            url = localStorage.getItem('oldUrl')
            var errorCount = localStorage.getItem('errorCount')
            if (errorCount == null) {
                errorCount = 1
            } else {
                errorCount = parseInt(errorCount) + 1
            }
            if (errorCount >= 5) {
                localStorage.removeItem("errorCount")
                localStorage.removeItem("oldUrl")
                window.location.href = "https://changjiang.yuketang.cn/v2/web/index"
                return
            }
            localStorage.setItem('errorCount', errorCount)
        }
        localStorage.setItem('oldUrl', url);
        var videoId = url.split('/')[8];
        var newVideoId = parseInt(videoId) + step;
        var newUrl = url.replace(videoId, newVideoId);
        window.location.href = newUrl;
        flag = 0;
    }


    function execute() {
        var progress = 'null';

        try {
            progress = document.querySelectorAll('span.text')[1].textContent.split("：")[1];
        } catch (e) {
            console.log('读取时出错，查看是否为video');
            var elem = document.querySelector('#video-box');
            if (elem.innerHTML == '') {
                goNextVideo(1);
                return;
            } else {
                location.reload();
            }
        }
        try {
            if(flag == 0){
                setTimeout(function () {
                    // 视频开始5s之后再开启倍速
                    speed()
                },10000);
                flag = 1;
            }
            progress = parseInt(progress.split("%")[0]);
            document.querySelector('div.title-fl:first-child').innerText = '脚本检测到进度：' + progress + '%';
            if (progress >= 95) {
                goNextVideo(1);
                return;
            }
            setTimeout(execute, 2000);
        } catch (e) {
            console.log('读取时出错，尝试重试');
            // location.reload();
        }

    }

    var url = window.location.href;
    if (url.match("/video-student")) {
        setTimeout(() => {
            var text = document.getElementsByClassName('text text-ellipsis')[0].innerText;
            if (text.match("作业") || text.match("讨论题") || text.match("推荐资料")) {
                goNextVideo(1);
            }
        }, 2000)


        if (window.onurlchange === null) {
            window.addEventListener("urlchange", () => {
                setTimeout(execute, 2000);
            });
        }
        setTimeout(execute, 2000);
    } else {
        setTimeout(execute, 2000);
    }

})();