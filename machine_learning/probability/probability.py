import numpy as np


class Probability:
    event_set: np.ndarray = np.array([])
    sample_space_set: np.ndarray = np.array([])

    def __init__(self, event_set: np.ndarray, sample_space_set: np.ndarray) -> None:
        self.event_set = event_set
        self.sample_space_set = sample_space_set

    def check_range(func) -> bool:
        """Used to check the probability doesn't exceeding the it's actual range of event happening"""
        def wrapper(*args, **kwargs):
            result = func(*args, **kwargs)

            if not (0 <= result <= 1):
                raise ValueError(
                    f"Invalid probability {result}. Probability must be between 0 and 1"
                )
            
            return result

        return wrapper

    @staticmethod
    @check_range
    def cal_set_probility(number_of_elements_event: list[int], number_of_elements_ss: list[int]) -> float: 
        """Returns the probability based on the set of event and sample space."""
        try: 
            return float(np.array(number_of_elements_event).__len__() / np.array(number_of_elements_ss).__len__()) 
        except: 
            return -1
        
    @staticmethod
    @check_range
    def cal_probability(len_event: int, len_universal: int) -> float:
        return len_event / len_universal
        
    
    @staticmethod
    @check_range
    def joint_probability(event_a: list[int], event_b: list[int], sample_space: list[int]) -> float: 
        """find conditional probability using sets"""
        intersection: list[int] = set(event_a).intersection(event_b)
        return len(intersection) / len(sample_space)

    @staticmethod
    @check_range
    def joint_probability_from_condtional(p_a: float, p_b_given: float) -> float:
        """find conditional probability using probabilites"""

        if not (0 <= p_a <= 1 or 0 <= p_b_given <= 1):
            raise ValueError("Provided Probabilites are invalid")

        return p_a * p_b_given
    

print(Probability.joint_probability_from_condtional(25/200, 50/200))
