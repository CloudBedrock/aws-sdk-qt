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

#include "listprincipalpoliciesrequest.h"
#include "listprincipalpoliciesrequest_p.h"
#include "listprincipalpoliciesresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListPrincipalPoliciesRequest
 *
 * \brief The ListPrincipalPoliciesRequest class provides an interface for IoT ListPrincipalPolicies requests.
 *
 * \ingroup IoT
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT provides secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. You can discover your custom IoT-Data endpoint to communicate
 *  with, configure rules for data processing and integration with other services, organize resources associated with each
 *  thing (Thing Registry), configure logging, and create and manage policies and credentials to authenticate
 * 
 *  things>
 * 
 *  For more information about how AWS IoT works, see the <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
 *
 * \sa IoTClient::listPrincipalPolicies
 */

/*!
 * @brief  Constructs a new ListPrincipalPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPrincipalPoliciesRequest::ListPrincipalPoliciesRequest(const ListPrincipalPoliciesRequest &other)
    : IoTRequest(new ListPrincipalPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListPrincipalPoliciesRequest object.
 */
ListPrincipalPoliciesRequest::ListPrincipalPoliciesRequest()
    : IoTRequest(new ListPrincipalPoliciesRequestPrivate(IoTRequest::ListPrincipalPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListPrincipalPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListPrincipalPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPrincipalPoliciesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPrincipalPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListPrincipalPoliciesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListPrincipalPoliciesRequestPrivate
 *
 * @brief  Private implementation for ListPrincipalPoliciesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListPrincipalPoliciesRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListPrincipalPoliciesRequest instance.
 */
ListPrincipalPoliciesRequestPrivate::ListPrincipalPoliciesRequestPrivate(
    const IoTRequest::Action action, ListPrincipalPoliciesRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListPrincipalPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPrincipalPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPrincipalPoliciesRequest instance.
 */
ListPrincipalPoliciesRequestPrivate::ListPrincipalPoliciesRequestPrivate(
    const ListPrincipalPoliciesRequestPrivate &other, ListPrincipalPoliciesRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
