/* Reset and base styles */
* {
  margin: 0;
  padding: 0;
  box-sizing: border-box;
}

body {
  font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
  color: #fff;
  background-color: #1e1e2f;
  line-height: 1.6;
}

/* Hero Section */
.hero {
  background: url('banner.png') no-repeat center center/cover;
  height: 100vh;
  position: relative;
  display: flex;
  align-items: center;
  justify-content: center;
  text-align: center;
}

.overlay {
  background-color: rgba(0, 0, 0, 0.6);
  padding: 2rem;
  border-radius: 10px;
}

.hero h1 {
  font-size: 3rem;
  color: #a259ff;
  margin-bottom: 1rem;
}

.hero p {
  font-size: 1.2rem;
  margin-bottom: 2rem;
}

.cta-button {
  background-color: #a259ff;
  color: #fff;
  padding: 0.75rem 1.5rem;
  text-decoration: none;
  border-radius: 5px;
  font-weight: bold;
  transition: background-color 0.3s ease;
}

.cta-button:hover {
  background-color: #7a1fff;
}

/* Features Section */
.features {
  padding: 4rem 2rem;
  background-color: #2e2e3e;
  text-align: center;
}

.features h2 {
  font-size: 2.5rem;
  color: #a259ff;
  margin-bottom: 2rem;
}

.features ul {
  list-style: none;
  max-width: 600px;
  margin: 0 auto 2rem;
  text-align: left;
}

.features li {
  margin-bottom: 1rem;
  font-size: 1.1rem;
}

.highlight {
  font-style: italic;
  color: #ccc;
}

/* Footer */
footer {
  background-color: #1e1e2f;
  text-align: center;
  padding: 1rem;
  font-size: 0.9rem;
  color: #aaa;
}

