/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeyscags <jcupp@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:19:11 by joeyscags         #+#    #+#             */
/*   Updated: 2026/01/07 16:19:57 by joeyscags        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
    std::cout << "=== Testing Brain class ===" << std::endl;
    Brain* brain = new Brain();
    
    brain->setIdea(0, "I'm hungry");
    brain->setIdea(1, "Let's play");
    
    std::cout << "Idea 0: " << brain->getIdea(0) << std::endl;
    std::cout << "Idea 1: " << brain->getIdea(1) << std::endl;
    
    delete brain;
    
    return 0;
}
	