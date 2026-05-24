#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Project {
    string title;
    string category;
    string imageUrl;
};

class PortfolioPage {
private:
    vector<Project> projects;

public:
    PortfolioPage() {
        projects.push_back({
            "Minimal Branding Kit",
            "Brand Identity",
            "https://images.unsplash.com/photo-1516321318423-f06f85e504b3"
        });

        projects.push_back({
            "Mobile App UI Concept",
            "UI / UX Design",
            "https://images.unsplash.com/photo-1498050108023-c5249f4df085"
        });

        projects.push_back({
            "Creative Poster Series",
            "Graphic Design",
            "https://images.unsplash.com/photo-1522542550221-31fd19575a2d"
        });

        projects.push_back({
            "Modern Landing Page",
            "Web Design",
            "https://images.unsplash.com/photo-1460925895917-afdab827c52f"
        });
    }

    void displayHeroSection() {
        cout << "==============================================" << endl;
        cout << "         CREATIVE PORTFOLIO SHOWCASE          " << endl;
        cout << "==============================================" << endl;
        cout << endl;

        cout << "Share Your Designs With Style" << endl;
        cout << endl;

        cout << "A modern portfolio concept for designers to" << endl;
        cout << "showcase projects, creative ideas, and branding." << endl;
        cout << endl;

        cout << "[1] View Projects" << endl;
        cout << "[2] Contact Me" << endl;
        cout << endl;
    }

    void displayProjects() {
        cout << "==============================================" << endl;
        cout << "             SELECTED PROJECTS                " << endl;
        cout << "==============================================" << endl;
        cout << endl;

        for (size_t i = 0; i < projects.size(); i++) {
            cout << "Project " << i + 1 << endl;
            cout << "----------------------------------------------" << endl;
            cout << "Title    : " << projects[i].title << endl;
            cout << "Category : " << projects[i].category << endl;
            cout << "Preview  : " << projects[i].imageUrl << endl;
            cout << endl;
        }
    }

    void displayAboutSection() {
        cout << "==============================================" << endl;
        cout << "                 ABOUT ME                     " << endl;
        cout << "==============================================" << endl;
        cout << endl;

        cout << "I create digital experiences that feel modern" << endl;
        cout << "and memorable." << endl;
        cout << endl;

        cout << "This portfolio template is designed for" << endl;
        cout << "graphic designers, UI/UX creators, freelancers," << endl;
        cout << "and creative studios." << endl;
        cout << endl;

        cout << "Social Platforms:" << endl;
        cout << "- Dribbble" << endl;
        cout << "- Behance" << endl;
        cout << "- Instagram" << endl;
        cout << endl;
    }

    void displayFooter() {
        cout << "==============================================" << endl;
        cout << "© 2026 Creative Portfolio" << endl;
        cout << "Designed for showcasing your work." << endl;
        cout << "==============================================" << endl;
    }

    void renderPage() {
        displayHeroSection();
        displayProjects();
        displayAboutSection();
        displayFooter();
    }
};

int main() {
    PortfolioPage portfolio;
    portfolio.renderPage();

    return 0;
}
