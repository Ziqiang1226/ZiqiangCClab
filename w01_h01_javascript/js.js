

document.getElementById('add-to-list').onclick = function() {
  	var list = document.getElementById('list');
	var newLI = document.createElement('li');

	var text = document.getElementById("text");
  newLI.innerHTML = text.value;

  list.appendChild(newLI);

  setTimeout(function() {
    newLI.className = newLI.className + "show";
  }, 10);

  text.value = '';
}

document.getElementById('delete-to-list').onclick = function() {
			console.log("function is running")

  	var list = document.getElementById('list');
  	var text = document.getElementById("text");

var li = list.childNodes.length;
for (var i=0; i < li;i++) {
	if (i==li-1) {
		list.removeChild(list.childNodes[i]);
	}
}

}

