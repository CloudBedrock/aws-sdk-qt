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

#include "addcommunicationtocaserequest.h"
#include "addcommunicationtocaserequest_p.h"
#include "addcommunicationtocaseresponse.h"
#include "supportrequest_p.h"

namespace QtAws {
namespace Support {

/**
 * @class  AddCommunicationToCaseRequest
 *
 * @brief  Implements Support AddCommunicationToCase requests.
 *
 * @see    SupportClient::addCommunicationToCase
 */

/**
 * @brief  Constructs a new AddCommunicationToCaseRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddCommunicationToCaseRequest::AddCommunicationToCaseRequest(const AddCommunicationToCaseRequest &other)
    : SupportRequest(new AddCommunicationToCaseRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddCommunicationToCaseRequest object.
 */
AddCommunicationToCaseRequest::AddCommunicationToCaseRequest()
    : SupportRequest(new AddCommunicationToCaseRequestPrivate(SupportRequest::AddCommunicationToCaseAction, this))
{

}

bool AddCommunicationToCaseRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddCommunicationToCaseResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddCommunicationToCaseResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SupportClient::send
 */
QtAws::Core::AwsAbstractResponse * AddCommunicationToCaseRequest::response(QNetworkReply * const reply) const
{
    return new AddCommunicationToCaseResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddCommunicationToCaseRequestPrivate
 *
 * @brief  Private implementation for AddCommunicationToCaseRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddCommunicationToCaseRequestPrivate object.
 *
 * @param  action  Support action being performed.
 * @param  q       Pointer to this object's public AddCommunicationToCaseRequest instance.
 */
AddCommunicationToCaseRequestPrivate::AddCommunicationToCaseRequestPrivate(
    const SupportRequest::Action action, AddCommunicationToCaseRequest * const q)
    : AddCommunicationToCasePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddCommunicationToCaseRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddCommunicationToCaseRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddCommunicationToCaseRequest instance.
 */
AddCommunicationToCaseRequestPrivate::AddCommunicationToCaseRequestPrivate(
    const AddCommunicationToCaseRequestPrivate &other, AddCommunicationToCaseRequest * const q)
    : AddCommunicationToCasePrivate(other, q)
{

}

} // namespace Support
} // namespace QtAws
