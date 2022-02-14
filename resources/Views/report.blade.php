<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.0/css/bootstrap.min.css" integrity="sha384-9aIt2nRpC12Uk9gS9baDl411NQApFmC26EwAOH8WgZl5MYYxFfc+NcPb1dKGj7Sk" crossorigin="anonymous">
<script src="https://code.jquery.com/jquery-3.5.1.slim.min.js" integrity="sha384-DfXdz2htPH0lsSSs5nCTpuj/zy4C+OGpamoFVy38MVBnE+IbbVYUew+OrCXaRkfj" crossorigin="anonymous"></script>
<script src="https://cdn.jsdelivr.net/npm/popper.js@1.16.0/dist/umd/popper.min.js" integrity="sha384-Q6E9RHvbIyZFJoft+2mJbHaEWldlvI9IOYy5n3zV9zzTtmI3UksdQRVvoxMfooAo" crossorigin="anonymous"></script>

    <script type="text/javascript" src="https://www.gstatic.com/charts/loader.js"></script> 
    <link rel="stylesheet" href="field.css">
<x-app-layout>
  <div class="card bg-primary text-white" style="width:19rem;margin-left:10px;margin-top:20px">
    <div class="card-body">
      
      {{ $rat }} registered pupils</div>
    </div>
  <div class="card bg-primary text-white" style="width:19rem;margin-left:350px;margin-top:-155px">
    <div class="card-body">
     {{ $count }} activated pupils</div>
    </div>
    <div class="card bg-primary text-white" style="width:19rem;margin-left:690px;margin-top:-155px">
      <div class="card-body">
       {{ $count2 }} deactivated pupils</div>
      </div>
      <div class="card bg-primary text-white" style="font-size:25px;width:19rem;height:9.6rem;margin-left:1030px;margin-top:-155px">
        <div class="card-body">
         {{ $count3 }} assignments set</div>
        </div>
        
        <div id="tips">
          <span class="range">&emsp;&emsp;&emsp; Percentage of pupils performance in given ranges for all assignments</span>
        <div id="piechart" style="width: 550px; height: 400px; margin-left: 200px">
        </div>
    <script type="text/javascript">
        var phone_count_18 = <?php echo $count4; ?>;
        var phone_count_19 = <?php echo $count5; ?>;
        var phone_count_20 = <?php echo $count6; ?>;

        google.charts.load('current', {'packages':['corechart']});
        google.charts.setOnLoadCallback(drawChart);
        function drawChart() {
             var data = google.visualization.arrayToDataTable([
          ['Range', 'Grade'],
          ['Above 80%',  phone_count_18],
          ['Above 50%',  phone_count_19],
          ['Below 50%',  phone_count_20]
        ]);
            var options = {                
                curveType: 'function',
                legend: { position: 'bottom' }
            };
            var chart = new google.visualization.PieChart(document.getElementById('piechart'));
            chart.draw(data, options);
        }
    </script>
    </div>
</x-app-layout>