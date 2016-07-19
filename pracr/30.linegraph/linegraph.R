# Create the data for the chart.
v <- c(7,12,28,3,41)
# Give the chart file a name.
png(file = "line_chart.jpg")
# Plot the bar chart. 
plot(v,type="o")
# Save the file.
dev.off()
