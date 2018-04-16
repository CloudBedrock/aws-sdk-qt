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

#include "updateservicerequest.h"
#include "updateservicerequest_p.h"
#include "updateserviceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::UpdateServiceRequest
 *
 * \brief The UpdateServiceRequest class provides an interface for ServiceDiscovery UpdateService requests.
 *
 * \ingroup ServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 *
 * \sa ServiceDiscoveryClient::updateService
 */

/*!
 * @brief  Constructs a new UpdateServiceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateServiceRequest::UpdateServiceRequest(const UpdateServiceRequest &other)
    : ServiceDiscoveryRequest(new UpdateServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateServiceRequest object.
 */
UpdateServiceRequest::UpdateServiceRequest()
    : ServiceDiscoveryRequest(new UpdateServiceRequestPrivate(ServiceDiscoveryRequest::UpdateServiceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateServiceRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateServiceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateServiceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateServiceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServiceResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateServiceRequestPrivate
 *
 * @brief  Private implementation for UpdateServiceRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateServiceRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public UpdateServiceRequest instance.
 */
UpdateServiceRequestPrivate::UpdateServiceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, UpdateServiceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateServiceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateServiceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateServiceRequest instance.
 */
UpdateServiceRequestPrivate::UpdateServiceRequestPrivate(
    const UpdateServiceRequestPrivate &other, UpdateServiceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
