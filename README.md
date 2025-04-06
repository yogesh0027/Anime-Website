# Anime Paradise Website

![Anime Paradise Logo](animes.jpg)

A responsive anime fan website featuring information about top anime series, characters, and merchandise.

## Features

- **Home Page**: Showcases featured anime content with interactive cards
- **About Page**: Information about the website and its mission
- **Services Page**: Details about anime streaming, recommendations and community
- **Contact Page**: Form to send inquiries to the site admin
- **Responsive Design**: Works on mobile, tablet and desktop devices
- **Interactive Elements**: Dropdown menu, hover effects, and contact form

## Pages

1. **index.html** - Main landing page with featured anime cards
2. **about.html** - About us information
3. **service.html** - Services offered by Anime Paradise  
4. **contact.html** - Contact form with email functionality
5. **page1.html** to **page5.html** - Content pages for different anime categories
6. **login.html** - User login page (placeholder)

## Technologies Used

- HTML5
- CSS3
- JavaScript
- SMTP.js for contact form email functionality
- Font Awesome icons

## Installation

No installation required - just open index.html in any modern web browser.

## Project Structure

```
ap/
├── index.html          # Main page
├── about.html          # About page
├── service.html        # Services page  
├── contact.html        # Contact page
├── login.html          # Login page
├── page1.html          # Top 10 Anime
├── page2.html          # Anime Villains
├── page3.html          # Highest Grossing Anime
├── page4.html          # Best Selling Manga
├── page5.html          # Popular Anime by Country
├── style.css           # Main stylesheet
├── 333.jpg             # Image assets
├── 4266702.jpg         # Image assets
├── 747018.jpg          # Image assets
├── animes.jpg          # Image assets
├── bg5.jpg             # Background image
└── ...                 # Other image assets
```

## Contact Form Setup

The contact form uses SMTP.js to send emails. To configure:

1. Sign up for Elastic Email service
2. Update the SMTP credentials in contact.html:
   ```javascript
   Host: "smtp.elasticemail.com",
   Username: "your_email@example.com", 
   Password: "your_smtp_password",
   To: "recipient@example.com",
   From: "your_email@example.com"
   ```



## Screenshots

![Home Page](animes.jpg)
![About Page](bg5.jpg)
