function show() {
  var sidebar = document.getElementById("sidebar");
  var blacker = document.getElementById("blacker");
  var pos = -300;
  var opt = 0;
  var id = setInterval(frame, 1);
  sidebar.style.display = "block";
  blacker.style.display = "block";
  function frame() {
    if (pos == 0) {
      clearInterval(id);
    } else {
      pos += 6;
      opt += 0.015;
      sidebar.style.left = pos + "px";
      blacker.style.opacity = opt;
    }
  }
}
function hide() {
  var sidebar = document.getElementById("sidebar");
  var blacker = document.getElementById("blacker");
  var pos = 0;
  var opt = 0.75;
  var id = setInterval(frame, 1);
  function frame() {
    if (pos == -300) {
      clearInterval(id);
      sidebar.style.display = "none";
      blacker.style.display = "none";
    } else {
      pos -= 6;
      opt -= 0.015;
      sidebar.style.left = pos + "px";
      blacker.style.opacity = opt;
    }
  }
}
