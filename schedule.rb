schedule = [
  { time: "3:30 am", activity: "Wake up, stretching, and meditation" },
  { time: "4:00 am", activity: "Personal development (reading, journaling, etc.)" },
  { time: "5:00 am", activity: "Workout (e.g. jogging, strength training, yoga)" },
  { time: "6:00 am", activity: "Shower and get ready for work" },
  { time: "6:30 am", activity: "Breakfast with family" },
  { time: "7:00 am", activity: "Commute to work" },
  { time: "8:00 am", activity: "Start work" },
  { time: "12:00 pm", activity: "Lunch break (you can use this time for community service if you wish)" },
  { time: "1:00 pm", activity: "Continue work" },
  { time: "5:00 pm", activity: "End work, commute back home" },
  { time: "6:00 pm", activity: "Family time (e.g. dinner, conversation, games)" },
  { time: "7:00 pm", activity: "Leisure time (e.g. reading, watching a movie, listening to music)" },
  { time: "8:00 pm", activity: "Community service (e.g. volunteering, attending a meeting)" },
  { time: "9:00 pm", activity: "Wind-down routine (e.g. reading, meditation, gratitude journal)" },
  { time: "9:15 pm", activity: "Bedtime" }
]

# Display schedule
puts "Daily Schedule:"
schedule.each { |activity| puts "#{activity[:time]} - #{activity[:activity]}" }
