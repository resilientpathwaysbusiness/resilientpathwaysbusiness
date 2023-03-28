// Resilient Pathways - Modus Operandi
// Written by ChatGPT

#include <iostream>
using namespace std;

// Function prototypes
void displayMission();
void displayValues();
void displayProducts();
void displayServices();
void displayTestimonials();

int main()
{
    // Display company information
    cout << "Welcome to Resilient Pathways!" << endl;
    cout << "Our company sells products and services that help people overcome adversity and thrive." << endl;
    cout << endl;

    // Display mission and values
    displayMission();
    displayValues();
    cout << endl;

    // Display products and services
    displayProducts();
    displayServices();
    cout << endl;

    // Display customer testimonials
    displayTestimonials();
    cout << endl;

    // Thank the customer
    cout << "Thank you for choosing Resilient Pathways. We look forward to helping you overcome adversity and thrive!" << endl;

    return 0;
}

// Function definitions
void displayMission()
{
    cout << "Our Mission: To provide individuals with the tools, resources, and support they need to overcome adversity and thrive." << endl;
}

void displayValues()
{
    cout << "Our Values: " << endl;
    cout << "- Faith: We believe in a higher power that guides us in all aspects of life." << endl;
    cout << "- Respect: We treat everyone with dignity and respect, regardless of their background or circumstances." << endl;
    cout << "- Integrity: We uphold the highest ethical standards in all our interactions and transactions." << endl;
    cout << "- Excellence: We strive for excellence in everything we do, from product design to customer service." << endl;
}

void displayProducts()
{
    cout << "Our Products: " << endl;
    cout << "- Resilience Coaching: One-on-one coaching sessions with trained professionals to help individuals build resilience and overcome challenges." << endl;
    cout << "- Resilience Workshops: Interactive workshops that teach individuals practical strategies for building resilience and thriving." << endl;
    cout << "- Resilience Tools: Online courses, books, and other resources that provide individuals with the tools they need to overcome adversity and thrive." << endl;
}

void displayServices()
{
    cout << "Our Services: " << endl;
    cout << "- Resilience Consulting: We work with organizations to design and implement resilience-building programs for their employees and stakeholders." << endl;
    cout << "- Resilience Speaking: Our keynote speakers deliver inspiring and informative presentations on the power of resilience and how to build it." << endl;
}

void displayTestimonials()
{
    cout << "Customer Testimonials: " << endl;
    cout << "- 'Resilient Pathways helped me overcome some of the toughest challenges in my life. Their coaching and resources gave me the tools I needed to thrive.' - Sarah W." << endl;
    cout << "- 'The Resilience Workshop was a game-changer for me. I learned so much and came away feeling more confident and empowered than ever before.' - John D." << endl;
}
