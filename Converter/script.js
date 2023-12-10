function attachScrollBehavior() {
    var navbarLinks = document.querySelectorAll('.navbar a');
    var offset = 300; 

    navbarLinks.forEach(function(link) {
        link.addEventListener('click', function(e) {
            e.preventDefault(); 

            var targetId = this.getAttribute('href').substring(1); 
            var targetElement = document.getElementById(targetId);

            if (targetElement) {
                var targetPosition = targetElement.getBoundingClientRect().top + window.scrollY;
                window.scrollTo({
                    top: targetPosition - offset,
                    behavior: 'smooth'
                });
            }
        });
    });
}


document.addEventListener('DOMContentLoaded', function() {
    if (window.innerWidth < 700) {
        attachScrollBehavior();
    }
});


window.addEventListener('resize', function() {
    if (window.innerWidth < 700) {
        attachScrollBehavior();
    } else {
        
        var navbarLinks = document.querySelectorAll('.navbar a');
        navbarLinks.forEach(function(link) {
            link.removeEventListener('click', function(e) {});
        });
    }
});
