/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "verifydomaindkimrequest.h"
#include "verifydomaindkimrequest_p.h"
#include "verifydomaindkimresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::VerifyDomainDkimRequest
 * \brief The VerifyDomainDkimRequest class provides an interface for SES VerifyDomainDkim requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SesClient::verifyDomainDkim
 */

/*!
 * Constructs a copy of \a other.
 */
VerifyDomainDkimRequest::VerifyDomainDkimRequest(const VerifyDomainDkimRequest &other)
    : SesRequest(new VerifyDomainDkimRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a VerifyDomainDkimRequest object.
 */
VerifyDomainDkimRequest::VerifyDomainDkimRequest()
    : SesRequest(new VerifyDomainDkimRequestPrivate(SesRequest::VerifyDomainDkimAction, this))
{

}

/*!
 * \reimp
 */
bool VerifyDomainDkimRequest::isValid() const
{
    return false;
}


/*!
 * Returns a VerifyDomainDkimResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * VerifyDomainDkimRequest::response(QNetworkReply * const reply) const
{
    return new VerifyDomainDkimResponse(*this, reply);
}

/*!
 * \class QtAws::SES::VerifyDomainDkimRequestPrivate
 * \brief The VerifyDomainDkimRequestPrivate class provides private implementation for VerifyDomainDkimRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a VerifyDomainDkimRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
VerifyDomainDkimRequestPrivate::VerifyDomainDkimRequestPrivate(
    const SesRequest::Action action, VerifyDomainDkimRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the VerifyDomainDkimRequest
 * class' copy constructor.
 */
VerifyDomainDkimRequestPrivate::VerifyDomainDkimRequestPrivate(
    const VerifyDomainDkimRequestPrivate &other, VerifyDomainDkimRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
