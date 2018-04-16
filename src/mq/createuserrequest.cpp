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

#include "createuserrequest.h"
#include "createuserrequest_p.h"
#include "createuserresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::CreateUserRequest
 *
 * \brief The CreateUserRequest class provides an interface for MQ CreateUser requests.
 *
 * \ingroup MQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MQClient::createUser
 */

/*!
 * @brief  Constructs a new CreateUserRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateUserRequest::CreateUserRequest(const CreateUserRequest &other)
    : MQRequest(new CreateUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateUserRequest object.
 */
CreateUserRequest::CreateUserRequest()
    : MQRequest(new CreateUserRequestPrivate(MQRequest::CreateUserAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUserRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateUserResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateUserResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MQClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateUserRequestPrivate
 *
 * @brief  Private implementation for CreateUserRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateUserRequestPrivate object.
 *
 * @param  action  MQ action being performed.
 * @param  q       Pointer to this object's public CreateUserRequest instance.
 */
CreateUserRequestPrivate::CreateUserRequestPrivate(
    const MQRequest::Action action, CreateUserRequest * const q)
    : MQRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateUserRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateUserRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateUserRequest instance.
 */
CreateUserRequestPrivate::CreateUserRequestPrivate(
    const CreateUserRequestPrivate &other, CreateUserRequest * const q)
    : MQRequestPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
