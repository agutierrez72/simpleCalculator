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
});