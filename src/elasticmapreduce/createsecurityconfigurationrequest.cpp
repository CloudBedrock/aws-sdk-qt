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

#include "createsecurityconfigurationrequest.h"
#include "createsecurityconfigurationrequest_p.h"
#include "createsecurityconfigurationresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::CreateSecurityConfigurationRequest
 *
 * \brief The CreateSecurityConfigurationRequest class provides an interface for EMR CreateSecurityConfiguration requests.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::createSecurityConfiguration
 */

/*!
 * @brief  Constructs a new CreateSecurityConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSecurityConfigurationRequest::CreateSecurityConfigurationRequest(const CreateSecurityConfigurationRequest &other)
    : EMRRequest(new CreateSecurityConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateSecurityConfigurationRequest object.
 */
CreateSecurityConfigurationRequest::CreateSecurityConfigurationRequest()
    : EMRRequest(new CreateSecurityConfigurationRequestPrivate(EMRRequest::CreateSecurityConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSecurityConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateSecurityConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSecurityConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EMRClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSecurityConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateSecurityConfigurationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateSecurityConfigurationRequestPrivate
 *
 * @brief  Private implementation for CreateSecurityConfigurationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateSecurityConfigurationRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public CreateSecurityConfigurationRequest instance.
 */
CreateSecurityConfigurationRequestPrivate::CreateSecurityConfigurationRequestPrivate(
    const EMRRequest::Action action, CreateSecurityConfigurationRequest * const q)
    : EMRRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateSecurityConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSecurityConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSecurityConfigurationRequest instance.
 */
CreateSecurityConfigurationRequestPrivate::CreateSecurityConfigurationRequestPrivate(
    const CreateSecurityConfigurationRequestPrivate &other, CreateSecurityConfigurationRequest * const q)
    : EMRRequestPrivate(other, q)
{

}

} // namespace EMR
} // namespace QtAws
