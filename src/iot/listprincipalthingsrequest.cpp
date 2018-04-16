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

#include "listprincipalthingsrequest.h"
#include "listprincipalthingsrequest_p.h"
#include "listprincipalthingsresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/*!
 * \class QtAws::IoT::ListPrincipalThingsRequest
 *
 * \brief The ListPrincipalThingsRequest class encapsulates IoT ListPrincipalThings requests.
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
 * \sa IoTClient::listPrincipalThings
 */

/*!
 * @brief  Constructs a new ListPrincipalThingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPrincipalThingsRequest::ListPrincipalThingsRequest(const ListPrincipalThingsRequest &other)
    : IoTRequest(new ListPrincipalThingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListPrincipalThingsRequest object.
 */
ListPrincipalThingsRequest::ListPrincipalThingsRequest()
    : IoTRequest(new ListPrincipalThingsRequestPrivate(IoTRequest::ListPrincipalThingsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPrincipalThingsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListPrincipalThingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPrincipalThingsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPrincipalThingsRequest::response(QNetworkReply * const reply) const
{
    return new ListPrincipalThingsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListPrincipalThingsRequestPrivate
 *
 * @brief  Private implementation for ListPrincipalThingsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListPrincipalThingsRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public ListPrincipalThingsRequest instance.
 */
ListPrincipalThingsRequestPrivate::ListPrincipalThingsRequestPrivate(
    const IoTRequest::Action action, ListPrincipalThingsRequest * const q)
    : IoTRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListPrincipalThingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPrincipalThingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPrincipalThingsRequest instance.
 */
ListPrincipalThingsRequestPrivate::ListPrincipalThingsRequestPrivate(
    const ListPrincipalThingsRequestPrivate &other, ListPrincipalThingsRequest * const q)
    : IoTRequestPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
