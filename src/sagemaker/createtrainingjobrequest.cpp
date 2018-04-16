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

#include "createtrainingjobrequest.h"
#include "createtrainingjobrequest_p.h"
#include "createtrainingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateTrainingJobRequest
 *
 * \brief The CreateTrainingJobRequest class encapsulates SageMaker CreateTrainingJob requests.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::createTrainingJob
 */

/*!
 * @brief  Constructs a new CreateTrainingJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTrainingJobRequest::CreateTrainingJobRequest(const CreateTrainingJobRequest &other)
    : SageMakerRequest(new CreateTrainingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateTrainingJobRequest object.
 */
CreateTrainingJobRequest::CreateTrainingJobRequest()
    : SageMakerRequest(new CreateTrainingJobRequestPrivate(SageMakerRequest::CreateTrainingJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTrainingJobRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateTrainingJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTrainingJobResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTrainingJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrainingJobResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateTrainingJobRequestPrivate
 *
 * @brief  Private implementation for CreateTrainingJobRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateTrainingJobRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public CreateTrainingJobRequest instance.
 */
CreateTrainingJobRequestPrivate::CreateTrainingJobRequestPrivate(
    const SageMakerRequest::Action action, CreateTrainingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateTrainingJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTrainingJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTrainingJobRequest instance.
 */
CreateTrainingJobRequestPrivate::CreateTrainingJobRequestPrivate(
    const CreateTrainingJobRequestPrivate &other, CreateTrainingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
