$(document).ready(function(){
    $("#add").click(function(){
        var lhs = $("#x").val();
        var rhs = $("#y").val();

        $.get("/add", {"x": lhs, "y": rhs}, function(response){

            var data = JSON.parse(response);

            var ans = data["ans"];

            $("#ans").html(ans);
        });
    });

    $("#sub").click(function(){
        var lhs = $("#x").val();
        var rhs = $("#y").val();

        $.get("/sub", {"x": lhs, "y": rhs}, function(response){

            var data = JSON.parse(response);

            var ans = data.ans;

            $("#ans").html(ans);
        });
    });

    $("#mult").click(function(){
        var lhs = $("#x").val();
        var rhs = $("#y").val();

        $.get("/mult", {"x": lhs, "y": rhs}, function(response){

            var data = JSON.parse(response);
            
            var ans = data.ans;
            
            $("#ans").html(ans);
        });

    });

    $("#div").click(function(){
        var lhs = $("#x").val();
        var rhs = $("#y").val();

        $.get("/div", {"x": lhs, "y": rhs}, function(response){
            var data = JSON.parse(response);

            var ans = data.ans;

            var rem = data.rem;
            
            $("#ans").html(ans + " rem " + rem);
        });
    });
});