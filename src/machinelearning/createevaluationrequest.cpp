/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createevaluationrequest.h"
#include "createevaluationrequest_p.h"
#include "createevaluationresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateEvaluationRequest
 *
 * \brief The CreateEvaluationRequest class encapsulates MachineLearning CreateEvaluation requests.
 *
 * \ingroup MachineLearning
 *
 *
 * \sa MachineLearningClient::createEvaluation
 */

/*!
 * @brief  Constructs a new CreateEvaluationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateEvaluationRequest::CreateEvaluationRequest(const CreateEvaluationRequest &other)
    : MachineLearningRequest(new CreateEvaluationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateEvaluationRequest object.
 */
CreateEvaluationRequest::CreateEvaluationRequest()
    : MachineLearningRequest(new CreateEvaluationRequestPrivate(MachineLearningRequest::CreateEvaluationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEvaluationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateEvaluationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateEvaluationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MachineLearningClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEvaluationRequest::response(QNetworkReply * const reply) const
{
    return new CreateEvaluationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateEvaluationRequestPrivate
 *
 * @brief  Private implementation for CreateEvaluationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateEvaluationRequestPrivate object.
 *
 * @param  action  MachineLearning action being performed.
 * @param  q       Pointer to this object's public CreateEvaluationRequest instance.
 */
CreateEvaluationRequestPrivate::CreateEvaluationRequestPrivate(
    const MachineLearningRequest::Action action, CreateEvaluationRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateEvaluationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateEvaluationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateEvaluationRequest instance.
 */
CreateEvaluationRequestPrivate::CreateEvaluationRequestPrivate(
    const CreateEvaluationRequestPrivate &other, CreateEvaluationRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
