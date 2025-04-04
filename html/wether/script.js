async function getWeather() {
    const city = document.getElementById('city').value;
    if (!city) {
        alert("Please enter a city name!");
        return;
    }

    const apiKey = '6ec090a588cd6eb319b9b561bb652100';
    const url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&units=metric&appid=${apiKey}`;

    try {
        const response = await fetch(url);
        const data = await response.json();

        if (data.cod === 200) {
            document.getElementById('weatherResult').innerText =
                `Weather in ${data.name}: ${data.weather[0].description}, Temperature: ${data.main.temp}°C`;
        } else {
            document.getElementById('weatherResult').innerText = "City not found!";
        }
    } catch (error) {
        document.getElementById('weatherResult').innerText = "Error fetching weather!";
    }
}
