document.addEventListener('DOMContentLoaded', function() {        // #The DOMContentLoaded event fires when the initial HTML document has been completely loaded and parsed, without waiting for stylesheets, images, and subframes to finish loading.
    document.querySelector('form').addEventListener('submit', function(event){       // #The querySelector() method returns the first element that matches a specified CSS selector(s) in the document. If no matches are found, null is returned.
         let name = document.querySelector('#name').value;  // #document.querySelector() returns the first element that matches a specified CSS selector(s) in the document. If no matches are found, null is returned.
         alert(`Hello, ${name}!`);
         event.preventDefault();

    });
});